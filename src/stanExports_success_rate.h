// Generated by rstantools.  Do not edit by hand.

/*
    bayes4psy is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    bayes4psy is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with bayes4psy.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#ifndef USE_STANC3
#define USE_STANC3
#endif
#include <rstan/rstaninc.hpp>
// Code generated by stanc v2.26.1-4-gd72b68b7-dirty
#include <stan/model/model_header.hpp>
namespace model_success_rate_namespace {
inline void validate_positive_index(const char* var_name, const char* expr,
                                    int val) {
  if (val < 1) {
    std::stringstream msg;
    msg << "Found dimension size less than one in simplex declaration"
        << "; variable=" << var_name << "; dimension size expression=" << expr
        << "; expression value=" << val;
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}
inline void validate_unit_vector_index(const char* var_name, const char* expr,
                                       int val) {
  if (val <= 1) {
    std::stringstream msg;
    if (val == 1) {
      msg << "Found dimension size one in unit vector declaration."
          << " One-dimensional unit vector is discrete"
          << " but the target distribution must be continuous."
          << " variable=" << var_name << "; dimension size expression=" << expr;
    } else {
      msg << "Found dimension size less than one in unit vector declaration"
          << "; variable=" << var_name << "; dimension size expression=" << expr
          << "; expression value=" << val;
    }
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}
using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using std::pow;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::model_base_crtp;
using stan::model::rvalue;
using stan::model::cons_list;
using stan::model::index_uni;
using stan::model::index_max;
using stan::model::index_min;
using stan::model::index_min_max;
using stan::model::index_multi;
using stan::model::index_omni;
using stan::model::nil_index_list;
using namespace stan::math;
using stan::math::pow; 
stan::math::profile_map profiles__;
static int current_statement__= 0;
static const std::vector<string> locations_array__ = {" (found before start of program)",
                                                      " (in 'success_rate', line 12, column 2 to column 27)",
                                                      " (in 'success_rate', line 13, column 2 to column 20)",
                                                      " (in 'success_rate', line 15, column 2 to column 31)",
                                                      " (in 'success_rate', line 20, column 2 to column 13)",
                                                      " (in 'success_rate', line 28, column 4 to column 48)",
                                                      " (in 'success_rate', line 27, column 29 to line 29, column 3)",
                                                      " (in 'success_rate', line 27, column 9 to line 29, column 3)",
                                                      " (in 'success_rate', line 26, column 4 to column 49)",
                                                      " (in 'success_rate', line 25, column 29 to line 27, column 3)",
                                                      " (in 'success_rate', line 25, column 9 to line 29, column 3)",
                                                      " (in 'success_rate', line 24, column 4 to column 50)",
                                                      " (in 'success_rate', line 23, column 29 to line 25, column 3)",
                                                      " (in 'success_rate', line 23, column 9 to line 29, column 3)",
                                                      " (in 'success_rate', line 22, column 4 to column 51)",
                                                      " (in 'success_rate', line 21, column 22 to line 23, column 3)",
                                                      " (in 'success_rate', line 21, column 2 to line 29, column 3)",
                                                      " (in 'success_rate', line 31, column 2 to column 9)",
                                                      " (in 'success_rate', line 39, column 4 to column 49)",
                                                      " (in 'success_rate', line 38, column 29 to line 40, column 3)",
                                                      " (in 'success_rate', line 38, column 9 to line 40, column 3)",
                                                      " (in 'success_rate', line 37, column 4 to column 50)",
                                                      " (in 'success_rate', line 36, column 29 to line 38, column 3)",
                                                      " (in 'success_rate', line 36, column 9 to line 40, column 3)",
                                                      " (in 'success_rate', line 35, column 4 to column 51)",
                                                      " (in 'success_rate', line 34, column 29 to line 36, column 3)",
                                                      " (in 'success_rate', line 34, column 9 to line 40, column 3)",
                                                      " (in 'success_rate', line 33, column 4 to column 52)",
                                                      " (in 'success_rate', line 32, column 22 to line 34, column 3)",
                                                      " (in 'success_rate', line 32, column 2 to line 40, column 3)",
                                                      " (in 'success_rate', line 42, column 2 to column 33)",
                                                      " (in 'success_rate', line 45, column 4 to column 30)",
                                                      " (in 'success_rate', line 44, column 17 to line 46, column 3)",
                                                      " (in 'success_rate', line 44, column 2 to line 46, column 3)",
                                                      " (in 'success_rate', line 2, column 2 to column 17)",
                                                      " (in 'success_rate', line 3, column 2 to column 17)",
                                                      " (in 'success_rate', line 4, column 8 to column 9)",
                                                      " (in 'success_rate', line 4, column 2 to column 34)",
                                                      " (in 'success_rate', line 5, column 8 to column 9)",
                                                      " (in 'success_rate', line 5, column 2 to column 26)",
                                                      " (in 'success_rate', line 7, column 2 to column 30)",
                                                      " (in 'success_rate', line 8, column 2 to column 34)",
                                                      " (in 'success_rate', line 15, column 26 to column 27)"};
#include <stan_meta_header.hpp>
class model_success_rate final : public model_base_crtp<model_success_rate> {
private:
  int n;
  int m;
  std::vector<int> r;
  std::vector<int> s;
  std::vector<int> p_ids;
  std::vector<double> p_values;
 
public:
  ~model_success_rate() { }
  
  inline std::string model_name() const final { return "model_success_rate"; }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.26.1-4-gd72b68b7-dirty", "stancflags = "};
  }
  
  
  model_success_rate(stan::io::var_context& context__,
                     unsigned int random_seed__ = 0,
                     std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    using local_scalar_t__ = double ;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static const char* function__ = "model_success_rate_namespace::model_success_rate";
    (void) function__;  // suppress unused var warning
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      current_statement__ = 34;
      context__.validate_dims("data initialization","n","int",
          context__.to_vec());
      n = std::numeric_limits<int>::min();
      
      current_statement__ = 34;
      n = context__.vals_i("n")[(1 - 1)];
      current_statement__ = 34;
      current_statement__ = 34;
      check_greater_or_equal(function__, "n", n, 0);
      current_statement__ = 35;
      context__.validate_dims("data initialization","m","int",
          context__.to_vec());
      m = std::numeric_limits<int>::min();
      
      current_statement__ = 35;
      m = context__.vals_i("m")[(1 - 1)];
      current_statement__ = 35;
      current_statement__ = 35;
      check_greater_or_equal(function__, "m", m, 0);
      current_statement__ = 36;
      validate_non_negative_index("r", "n", n);
      current_statement__ = 37;
      context__.validate_dims("data initialization","r","int",
          context__.to_vec(n));
      r = std::vector<int>(n, std::numeric_limits<int>::min());
      
      current_statement__ = 37;
      assign(r, nil_index_list(), context__.vals_i("r"),
        "assigning variable r");
      current_statement__ = 37;
      for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
        current_statement__ = 37;
        current_statement__ = 37;
        check_greater_or_equal(function__, "r[sym1__]", r[(sym1__ - 1)], 0);}
      current_statement__ = 37;
      for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
        current_statement__ = 37;
        current_statement__ = 37;
        check_less_or_equal(function__, "r[sym1__]", r[(sym1__ - 1)], 1);}
      current_statement__ = 38;
      validate_non_negative_index("s", "n", n);
      current_statement__ = 39;
      context__.validate_dims("data initialization","s","int",
          context__.to_vec(n));
      s = std::vector<int>(n, std::numeric_limits<int>::min());
      
      current_statement__ = 39;
      assign(s, nil_index_list(), context__.vals_i("s"),
        "assigning variable s");
      current_statement__ = 39;
      for (int sym1__ = 1; sym1__ <= n; ++sym1__) {
        current_statement__ = 39;
        current_statement__ = 39;
        check_greater_or_equal(function__, "s[sym1__]", s[(sym1__ - 1)], 0);}
      current_statement__ = 40;
      context__.validate_dims("data initialization","p_ids","int",
          context__.to_vec(2));
      p_ids = std::vector<int>(2, std::numeric_limits<int>::min());
      
      current_statement__ = 40;
      assign(p_ids, nil_index_list(), context__.vals_i("p_ids"),
        "assigning variable p_ids");
      current_statement__ = 40;
      for (int sym1__ = 1; sym1__ <= 2; ++sym1__) {
        current_statement__ = 40;
        current_statement__ = 40;
        check_greater_or_equal(function__, "p_ids[sym1__]",
                               p_ids[(sym1__ - 1)], 0);}
      current_statement__ = 41;
      context__.validate_dims("data initialization","p_values","double",
          context__.to_vec(4));
      p_values = std::vector<double>(4, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 41;
      assign(p_values, nil_index_list(), context__.vals_r("p_values"),
        "assigning variable p_values");
      current_statement__ = 41;
      for (int sym1__ = 1; sym1__ <= 4; ++sym1__) {
        current_statement__ = 41;
        current_statement__ = 41;
        check_greater_or_equal(function__, "p_values[sym1__]",
                               p_values[(sym1__ - 1)], 0);}
      current_statement__ = 42;
      validate_non_negative_index("p", "m", m);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      num_params_r__ += 1;
      num_params_r__ += 1;
      num_params_r__ += m;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI, stan::require_vector_like_t<VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR> log_prob_impl(VecR& params_r__,
                                                 VecI& params_i__,
                                                 std::ostream* pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    static const char* function__ = "model_success_rate_namespace::log_prob";
(void) function__;  // suppress unused var warning
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      local_scalar_t__ p0;
      p0 = DUMMY_VAR__;
      
      current_statement__ = 1;
      p0 = in__.scalar();
      current_statement__ = 1;
      if (jacobian__) {
        current_statement__ = 1;
        p0 = stan::math::lub_constrain(p0, 0, 1, lp__);
      } else {
        current_statement__ = 1;
        p0 = stan::math::lub_constrain(p0, 0, 1);
      }
      local_scalar_t__ tau;
      tau = DUMMY_VAR__;
      
      current_statement__ = 2;
      tau = in__.scalar();
      current_statement__ = 2;
      if (jacobian__) {
        current_statement__ = 2;
        tau = stan::math::lb_constrain(tau, 0, lp__);
      } else {
        current_statement__ = 2;
        tau = stan::math::lb_constrain(tau, 0);
      }
      Eigen::Matrix<local_scalar_t__, -1, 1> p;
      p = Eigen::Matrix<local_scalar_t__, -1, 1>(m);
      stan::math::fill(p, DUMMY_VAR__);
      
      current_statement__ = 3;
      p = in__.vector(m);
      current_statement__ = 3;
      for (int sym1__ = 1; sym1__ <= m; ++sym1__) {
        current_statement__ = 3;
        if (jacobian__) {
          current_statement__ = 3;
          assign(p, cons_list(index_uni(sym1__), nil_index_list()),
            stan::math::lub_constrain(p[(sym1__ - 1)], 0, 1, lp__),
            "assigning variable p");
        } else {
          current_statement__ = 3;
          assign(p, cons_list(index_uni(sym1__), nil_index_list()),
            stan::math::lub_constrain(p[(sym1__ - 1)], 0, 1),
            "assigning variable p");
        }}
      {
        int id;
        id = std::numeric_limits<int>::min();
        
        current_statement__ = 4;
        id = 1;
        current_statement__ = 16;
        if (logical_eq(p_ids[(id - 1)], 1)) {
          current_statement__ = 14;
          lp_accum__.add(
            uniform_lpdf<propto__>(p0, p_values[(((id * 2) - 1) - 1)],
              p_values[((id * 2) - 1)]));
        } else {
          current_statement__ = 13;
          if (logical_eq(p_ids[(id - 1)], 2)) {
            current_statement__ = 11;
            lp_accum__.add(
              normal_lpdf<propto__>(p0, p_values[(((id * 2) - 1) - 1)],
                p_values[((id * 2) - 1)]));
          } else {
            current_statement__ = 10;
            if (logical_eq(p_ids[(id - 1)], 3)) {
              current_statement__ = 8;
              lp_accum__.add(
                gamma_lpdf<propto__>(p0, p_values[(((id * 2) - 1) - 1)],
                  p_values[((id * 2) - 1)]));
            } else {
              current_statement__ = 7;
              if (logical_eq(p_ids[(id - 1)], 4)) {
                current_statement__ = 5;
                lp_accum__.add(
                  beta_lpdf<propto__>(p0, p_values[(((id * 2) - 1) - 1)],
                    p_values[((id * 2) - 1)]));
              } 
            }
          }
        }
        current_statement__ = 17;
        id = 2;
        current_statement__ = 29;
        if (logical_eq(p_ids[(id - 1)], 1)) {
          current_statement__ = 27;
          lp_accum__.add(
            uniform_lpdf<propto__>(tau, p_values[(((id * 2) - 1) - 1)],
              p_values[((id * 2) - 1)]));
        } else {
          current_statement__ = 26;
          if (logical_eq(p_ids[(id - 1)], 2)) {
            current_statement__ = 24;
            lp_accum__.add(
              normal_lpdf<propto__>(tau, p_values[(((id * 2) - 1) - 1)],
                p_values[((id * 2) - 1)]));
          } else {
            current_statement__ = 23;
            if (logical_eq(p_ids[(id - 1)], 3)) {
              current_statement__ = 21;
              lp_accum__.add(
                gamma_lpdf<propto__>(tau, p_values[(((id * 2) - 1) - 1)],
                  p_values[((id * 2) - 1)]));
            } else {
              current_statement__ = 20;
              if (logical_eq(p_ids[(id - 1)], 4)) {
                current_statement__ = 18;
                lp_accum__.add(
                  beta_lpdf<propto__>(tau, p_values[(((id * 2) - 1) - 1)],
                    p_values[((id * 2) - 1)]));
              } 
            }
          }
        }
        current_statement__ = 30;
        lp_accum__.add(beta_lpdf<propto__>(p, (p0 * tau), ((1 - p0) * tau)));
        current_statement__ = 33;
        for (int i = 1; i <= n; ++i) {
          current_statement__ = 31;
          lp_accum__.add(
            bernoulli_lpmf<propto__>(r[(i - 1)], p[(s[(i - 1)] - 1)]));}
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob_impl() 
    
  template <typename RNG, typename VecR, typename VecI, typename VecVar, stan::require_vector_like_vt<std::is_floating_point, VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr, stan::require_std_vector_vt<std::is_floating_point, VecVar>* = nullptr>
  inline void write_array_impl(RNG& base_rng__, VecR& params_r__,
                               VecI& params_i__, VecVar& vars__,
                               const bool emit_transformed_parameters__ = true,
                               const bool emit_generated_quantities__ = true,
                               std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.resize(0);
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    static const char* function__ = "model_success_rate_namespace::write_array";
(void) function__;  // suppress unused var warning
    (void) function__;  // suppress unused var warning
    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    (void) DUMMY_VAR__;  // suppress unused var warning
    
    try {
      double p0;
      p0 = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      p0 = in__.scalar();
      current_statement__ = 1;
      p0 = stan::math::lub_constrain(p0, 0, 1);
      double tau;
      tau = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 2;
      tau = in__.scalar();
      current_statement__ = 2;
      tau = stan::math::lb_constrain(tau, 0);
      Eigen::Matrix<double, -1, 1> p;
      p = Eigen::Matrix<double, -1, 1>(m);
      stan::math::fill(p, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 3;
      p = in__.vector(m);
      current_statement__ = 3;
      for (int sym1__ = 1; sym1__ <= m; ++sym1__) {
        current_statement__ = 3;
        assign(p, cons_list(index_uni(sym1__), nil_index_list()),
          stan::math::lub_constrain(p[(sym1__ - 1)], 0, 1),
          "assigning variable p");}
      vars__.emplace_back(p0);
      vars__.emplace_back(tau);
      for (int sym1__ = 1; sym1__ <= m; ++sym1__) {
        vars__.emplace_back(p[(sym1__ - 1)]);}
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // write_array_impl() 
    
  template <typename VecVar, typename VecI, stan::require_std_vector_t<VecVar>* = nullptr, stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void transform_inits_impl(const stan::io::var_context& context__,
                                   VecI& params_i__, VecVar& vars__,
                                   std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    vars__.clear();
    vars__.reserve(num_params_r__);
    
    try {
      int pos__;
      pos__ = std::numeric_limits<int>::min();
      
      pos__ = 1;
      double p0;
      p0 = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      p0 = context__.vals_r("p0")[(1 - 1)];
      double p0_free__;
      p0_free__ = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 1;
      p0_free__ = stan::math::lub_free(p0, 0, 1);
      double tau;
      tau = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 2;
      tau = context__.vals_r("tau")[(1 - 1)];
      double tau_free__;
      tau_free__ = std::numeric_limits<double>::quiet_NaN();
      
      current_statement__ = 2;
      tau_free__ = stan::math::lb_free(tau, 0);
      Eigen::Matrix<double, -1, 1> p;
      p = Eigen::Matrix<double, -1, 1>(m);
      stan::math::fill(p, std::numeric_limits<double>::quiet_NaN());
      
      {
        std::vector<local_scalar_t__> p_flat__;
        current_statement__ = 3;
        assign(p_flat__, nil_index_list(), context__.vals_r("p"),
          "assigning variable p_flat__");
        current_statement__ = 3;
        pos__ = 1;
        current_statement__ = 3;
        for (int sym1__ = 1; sym1__ <= m; ++sym1__) {
          current_statement__ = 3;
          assign(p, cons_list(index_uni(sym1__), nil_index_list()),
            p_flat__[(pos__ - 1)], "assigning variable p");
          current_statement__ = 3;
          pos__ = (pos__ + 1);}
      }
      Eigen::Matrix<double, -1, 1> p_free__;
      p_free__ = Eigen::Matrix<double, -1, 1>(m);
      stan::math::fill(p_free__, std::numeric_limits<double>::quiet_NaN());
      
      current_statement__ = 3;
      for (int sym1__ = 1; sym1__ <= m; ++sym1__) {
        current_statement__ = 3;
        assign(p_free__, cons_list(index_uni(sym1__), nil_index_list()),
          stan::math::lub_free(p[(sym1__ - 1)], 0, 1),
          "assigning variable p_free__");}
      vars__.emplace_back(p0_free__);
      vars__.emplace_back(tau_free__);
      for (int sym1__ = 1; sym1__ <= m; ++sym1__) {
        vars__.emplace_back(p_free__[(sym1__ - 1)]);}
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits_impl() 
    
  inline void get_param_names(std::vector<std::string>& names__) const {
    
    names__.clear();
    names__.emplace_back("p0");
    names__.emplace_back("tau");
    names__.emplace_back("p");
    } // get_param_names() 
    
  inline void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.clear();
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{});
    
    dimss__.emplace_back(std::vector<size_t>{static_cast<size_t>(m)});
    
    } // get_dims() 
    
  inline void constrained_param_names(
                                      std::vector<std::string>& param_names__,
                                      bool emit_transformed_parameters__ = true,
                                      bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "p0");
    param_names__.emplace_back(std::string() + "tau");
    for (int sym1__ = 1; sym1__ <= m; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "p" + '.' + std::to_string(sym1__));
      }}
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // constrained_param_names() 
    
  inline void unconstrained_param_names(
                                        std::vector<std::string>& param_names__,
                                        bool emit_transformed_parameters__ = true,
                                        bool emit_generated_quantities__ = true) const
    final {
    
    param_names__.emplace_back(std::string() + "p0");
    param_names__.emplace_back(std::string() + "tau");
    for (int sym1__ = 1; sym1__ <= m; ++sym1__) {
      {
        param_names__.emplace_back(std::string() + "p" + '.' + std::to_string(sym1__));
      }}
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // unconstrained_param_names() 
    
  inline std::string get_constrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"p0\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"tau\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"p\",\"type\":{\"name\":\"vector\",\"length\":" << m << "},\"block\":\"parameters\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  inline std::string get_unconstrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"p0\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"tau\",\"type\":{\"name\":\"real\"},\"block\":\"parameters\"},{\"name\":\"p\",\"type\":{\"name\":\"vector\",\"length\":" << m << "},\"block\":\"parameters\"}]";
    return s__.str();
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    inline void write_array(RNG& base_rng,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                            Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                            const bool emit_transformed_parameters = true,
                            const bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      std::vector<double> vars_vec(vars.size());
      std::vector<int> params_i;
      write_array_impl(base_rng, params_r, params_i, vars_vec,
          emit_transformed_parameters, emit_generated_quantities, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i) {
        vars.coeffRef(i) = vars_vec[i];
      }
    }
    template <typename RNG>
    inline void write_array(RNG& base_rng, std::vector<double>& params_r,
                            std::vector<int>& params_i,
                            std::vector<double>& vars,
                            bool emit_transformed_parameters = true,
                            bool emit_generated_quantities = true,
                            std::ostream* pstream = nullptr) const {
      write_array_impl(base_rng, params_r, params_i, vars, emit_transformed_parameters, emit_generated_quantities, pstream);
    }
    template <bool propto__, bool jacobian__, typename T_>
    inline T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
                       std::ostream* pstream = nullptr) const {
      Eigen::Matrix<int, -1, 1> params_i;
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
    template <bool propto__, bool jacobian__, typename T__>
    inline T__ log_prob(std::vector<T__>& params_r,
                        std::vector<int>& params_i,
                        std::ostream* pstream = nullptr) const {
      return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
    }
  
    inline void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream = nullptr) const final {
      std::vector<double> params_r_vec(params_r.size());
      std::vector<int> params_i;
      transform_inits_impl(context, params_i, params_r_vec, pstream);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i) {
        params_r.coeffRef(i) = params_r_vec[i];
      }
    }
    inline void transform_inits(const stan::io::var_context& context,
                                std::vector<int>& params_i,
                                std::vector<double>& vars,
                                std::ostream* pstream = nullptr) const final {
      transform_inits_impl(context, params_i, vars, pstream);
    }        
};
}
using stan_model = model_success_rate_namespace::model_success_rate;
#ifndef USING_R
// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_success_rate_namespace::profiles__;
}
#endif
#endif
